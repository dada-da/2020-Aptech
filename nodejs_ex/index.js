    const express = require('express');
    const app = express();

    // start hosting nodejs port 5000
    const PORT = process.env.PORT || 5000;
    app.listen(5000, function() {
        console.log("server is running....");
    });
    // ket noi DB de lam viec voi du lieu
    const mssql = require("mssql");
    const config = {
        server:"118.70.125.210",
        user:"sa",
        password:"z@GH7ytQ",
        database:"QuangHoa"
    };
    mssql.connect(config,function(err){
        if(err) console.log(err);
        else console.log("ket noi DB thanh cong!");
    });
    //tao 1 bien de lam viec voi DB
    const sql = new mssql.Request();
    //khai bao web se dung view engine la ejs
    app.set("view engine","ejs");
    // cap quyen truy cap cac file static trong public
    app.use(express.static("public"));

    //tao 1 routing
    app.get("/",function (req,res) {
        var txt_sql = "select * from KhachHang;" + "select * from DonHang;select *from HangHoa;";
        sql.query(txt_sql, function (err,rows) {
            if(err){
                res.render("home",{
                    dskh:[],
                    dsdh:[],
                    dshh:[]
                })
            }else{
                res.render("home", {
                    dskh:rows.recordsets[0],
                    dsdh:rows.recordsets[1],
                    dshh:rows.recordsets[2],
                })
            }
        })
        //res.send("xin chao");
    });

    app.get("/danh-sach-khach-hang", function (req,res){
        var ds = [];
        var txt_sql = "select * from KhachHang";
        sql.query(txt_sql,function (err,rows){
            if(err) ds = ["khong co khach hang nao ca"];
            else ds = rows.recordset;
            res.render("danhsachkhachhang",{
                ds:ds
            });
        })
        //res.send(ds);
    });

    app.get("/danh-sach-hang-hoa", function (req,res){
        var ds_hang = [];
        var txt_sql = "select * from HangHoa";
        sql.query(txt_sql, function(err,rows){
            if(err) ds_hang = ["khong co hang hoa"];
            else ds_hang = rows.recordset;
            res.send(ds_hang);
        })
    })

    app.get("/tim-kiem-hang-hoa", function (req,res) {
        var thamsonguoidung = req.query.tentimkiem;
        if (thamsonguoidung == undefined) {
            res.render("timkiem", {ds: []});
        } else {
            var ds_hang = [];
            var txt_sql = "select * from HangHoa where Ten like '%" + thamsonguoidung + "%' OR MoTa like '%" + thamsonguoidung + "%'";
            sql.query(txt_sql, function (err, rows) {
                if (err) ds_hang = ["khong co hang hoa"];
                else ds_hang = rows.recordset;
                res.render("timkiem", {
                    ds: ds_hang
                });
            });
        }
    });

    app.get("/tim-kiem-don-hang-khach-hang", function(req,res){
        var thamsonguoidung = req.query.tenkhachhang;
        var ds_hang = [];
        var txt_sql = "select  NgayDat, TongTien from  where Ten like N'%"+thamsonguoidung+"%'";
        sql.query(txt_sql, function(err,rows){
            if(err) ds_hang = ["khong tim thay"];
            else ds_hang = rows.recordset;
            res.send(ds_hang);
        })
    })

    app.get("/chi-tiet-khach-hang",function(req,res){
        var dienthoai = req.query.dienthoai;
        var txt_sql = "select * from KhachHang where DienThoai like '"+dienthoai+"'";
        sql.query(txt_sql, function (err,rows){
            if(err) res.send("Khong co khach hang nao ca");
            else{
                if(rows.recordset.length > 0){
                    var kh = rows.recordset[0];
                    var txt_sql2 = "select * from DonHang where DienThoai like '"+dienthoai+"'";
                    sql.query(txt_sql2,function(err2,rows2){
                        if(err2) res.send("Khong co khach hang nao ca");
                        else{
                            res.render("chitietkhachhang",{
                                kh:kh,
                                dsdh:rows2.recordset
                            })
                        }
                    })
                }else{
                    res.send("Khong co khach hang nao ca");
                }
            }
        })
    });

    //chi tiet don hang
    app.get("/chi-tiet-don-hang", function(req,res){
        var ms = req.query.maso;
        var txt_sql = "select A.*,B.Ten,B.DiaChi from DonHang left join KhachHang on" +
            "V.DienThoai = A.DienThoai where A.MaSo = "+ms;
        sql.query(txt_sql, function (err,rows) {
            if(err) res.send("Khong co don hang nao ca");
            else{
                var ds = rows.recordset;
                if(ds.length > 0){
                    var dh = ds[0];
                    var txt_sql2 = "select B.Ten,B.MoTa,B.DonVi,B.Gia,A.SoLuong,A.ThanhTien" +
                        "from DonHangHangHoa A " +
                        " inner join HangHoa B on A.HHId = B.Id where A.MaSoDH = "+ms;
                    sql.query(txt_sql2,function (err2,rows2) {
                        if(err2) res.send("Khong co don hang nao ca");
                        else{
                            res.render("chitietdonghang", {
                                dh:dh,
                                ds: rows2.recordset
                            })
                        }
                    });
                }else{
                    res.send("Khong co don hang nao ca");
                }
            }
        });
    })

