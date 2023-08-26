import 'dart:io';


class Person {
  String name;
  int namSinh;
  Person(this.name, this.namSinh) {

  }

  void tinhTuoi() {
    int namHienTai = 2023;
    if (namSinh != null) {
      int tuoi = namHienTai - namSinh;
      print("Tuổi của $name hiện tại: $tuoi tuổi");
    } else {
      print("$name chưa được nhập năm sinh!!!");
    }
    

  }
  
}

void main() {
  var firstName = 'Tran';
  var lastName = 'Thanh Luong';
  var age = 22;
  var sex = 'Male';
  var school = 'Industrial University of Ho Chi Minh City';
  var favouriteColor = ['Blue', 'Silver'];
  var socialLink = {
    'facebook': 'http://facebook.com/l-3012',
    'instagram': 'http://facebook.com/l-3012'
  };

  Person Luong = Person('Luong', 2001);
  Luong.tinhTuoi();
}