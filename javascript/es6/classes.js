class Phone {
    constructor(name) {
        this.brand = name;
    }

    intro() {
        return 'Name of phone: ' + this.brand;
    }
}

class Model extends Phone {
    constructor(name, mod) {
        super(name); // super() method extends properties of Parent class <Phone>
        this.model = mod;
    }

    show() {
        return this.intro() + ', it is a ' + this.model;
    }
}

const myPhone = new Phone("Iphone");
console.log(myPhone.intro());

const yourPhone = new Model("Iphone", "15 Pro");
console.log(yourPhone.show());

/* Việc xử lý thiscác hàm mũi tên cũng khác với các hàm thông thường.
Nói tóm lại, với các hàm mũi tên không có ràng buộc nào về this.
Trong các hàm thông thường, thistừ khóa đại diện cho đối tượng được gọi là hàm, có thể là cửa sổ, tài liệu, nút hoặc bất kỳ thứ gì.
Với các hàm mũi tên, thistừ khóa luôn đại diện cho đối tượng xác định hàm mũi tên.
Chúng ta hãy xem hai ví dụ để hiểu sự khác biệt.
Cả hai ví dụ đều gọi một phương thức hai lần, lần đầu tiên khi trang tải và một lần nữa khi người dùng nhấp vào nút.
Ví dụ đầu tiên sử dụng hàm thông thường và ví dụ thứ hai sử dụng hàm mũi tên.
Kết quả cho thấy ví dụ đầu tiên trả về hai đối tượng khác nhau (cửa sổ và nút), còn ví dụ thứ hai trả về đối tượng Header hai lần. */