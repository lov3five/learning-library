# Hướng dẫn OOP trong TypeScript

## Giới thiệu
Object-oriented programming (OOP) là một phương pháp lập trình mà trong đó chúng ta tạo ra các đối tượng có chứa thuộc tính (properties) và phương thức (methods) để thực hiện các hành động. TypeScript, là một ngôn ngữ lập trình mở rộng của JavaScript, hỗ trợ OOP thông qua các tính năng như lớp (class), kế thừa (inheritance), đóng gói (encapsulation) và đa hình (polymorphism).

Trong hướng dẫn này, chúng ta sẽ tìm hiểu về cách sử dụng OOP trong TypeScript bằng cách sử dụng lớp, kế thừa, phạm vi truy cập, và các khái niệm khác.

## Lớp (Class)
Lớp (class) là một bản thiết kế để tạo ra các đối tượng có các thuộc tính và phương thức tương tự. Để định nghĩa một lớp trong TypeScript, chúng ta sử dụng từ khóa `class`.

Ví dụ:
```typescript
class Person {
  private name: string;
  private age: number;

  constructor(name: string, age: number) {
    this.name = name;
    this.age = age;
  }

  public getDetails(): string {
    return `Name: ${this.name}, Age: ${this.age}`;
  }
}

// Sử dụng lớp
const person = new Person("John", 30);
console.log(person.getDetails());  // Output: Name: John, Age: 30
```

Trong ví dụ trên, chúng ta định nghĩa một lớp `Person` có các thuộc tính `name` và `age`, và một phương thức `getDetails` để lấy thông tin chi tiết của đối tượng `Person`. Chúng ta sử dụng phương thức khởi tạo (constructor) để khởi tạo giá trị cho thuộc tính `name` và `age` khi tạo một đối tượng `Person`.

## Kế thừa (Inheritance)
Kế thừa (inheritance) là một khái niệm quan trọng trong OOP, cho phép chúng ta xây dựng các lớp con (subclasses) dựa trên các lớp cha (superclasses) đã tồn tại. Lớp con kế thừa các thuộc tính và phương thức của lớp cha, và có thể mở rộng hoặc ghi đè chúng.

Ví dụ:
```typescript
class Animal {
  protected name: string;

  constructor(name: string) {
    this.name = name;
  }

  public makeSound(): void {
    console.log("Animal makes a sound");
  }
}

class Dog extends Animal {
  public makeSound(): void {
    console.log("Dog barks");
  }
}

// Sử dụng kế thừa
const dog = new Dog("Buddy");
console.log(dog.name);         // Output: Buddy
dog.makeSound();               // Output: Dog barks
```

Trong ví dụ trên, chúng ta có lớp `Animal` là lớp cha và lớp `Dog` là lớp con kế thừa từ lớp `Animal`. Lớp `Dog` kế thừa thuộc tính `name` và phương thức `makeSound` từ lớp `Animal`. Chúng ta có thể ghi đè phương thức `makeSound` trong lớp con để cung cấp hành vi riêng.

## Phạm vi truy cập (Access Modifiers)
Phạm vi truy cập (access modifiers) trong TypeScript là các từ khóa để xác định phạm vi truy cập cho các thành viên (properties và methods) của một lớp. TypeScript hỗ trợ ba phạm vi truy cập chính: public, private, và protected.

- `public`: Các thành viên công khai (`public`) có thể truy cập từ bất kỳ đâu. Đây là phạm vi truy cập mặc định cho các thành viên của một lớp nếu không được chỉ định.

- `private`: Các thành viên `private` chỉ có thể truy cập từ bên trong lớp chứa nó. Các lớp con kế thừa từ lớp chứa không thể truy cập thành viên `private` này.

- `protected`: Các thành viên `protected` có thể truy cập từ bên trong lớp chứa nó và từ các lớp con kế thừa từ lớp chứa đó.

Ví dụ:
```typescript
class Car {
  public brand: string;
  private mileage: number;
  protected year: number;

  constructor(brand: string, mileage: number, year: number) {
    this.brand = brand;
    this.mileage = mileage;
    this.year = year;
  }

  public startEngine(): void {
    console.log(`Starting the engine of ${this.brand}`);
  }

  private calculateDepreciation(): number {
    return this.mileage * 0.1;
  }

  protected getAge(): number {
    return new Date().getFullYear() - this.year;
  }
}

// Sử dụng phạm vi truy cập
const myCar = new Car("Toyota", 50000, 2018);
console.log(myCar.brand);               // Output: Toyota
myCar.startEngine();                     // Output: Starting the engine of Toyota
console.log(myCar.calculateDepreciation());  // Error: Property 'calculateDepreciation' is private
console.log(myCar.getAge());             // Error: Property 'getAge' is protected
```

Trong ví dụ trên, chúng ta có lớp `Car` với các thành viên `brand`, `mileage`, và `year` có các phạm vi truy cập khác nhau. `brand` là một thành viên công khai (`public`) và có thể truy cập từ bất kỳ đâu. `mileage` là một thành viên `private`

và chỉ có thể truy cập từ bên trong lớp `Car` chứa nó. `year` là một thành viên `protected`, có thể truy cập từ bên trong lớp `Car` và từ các lớp con kế thừa từ `Car`.

Chúng ta có thể sử dụng các thành viên công khai (`public`) của lớp `Car` từ bên ngoài, nhưng không thể truy cập các thành viên `private` và `protected` từ bên ngoài lớp `Car`.

## Đa hình (Polymorphism)
Đa hình (polymorphism) là khả năng của một đối tượng để thể hiện các hình thái và hành vi khác nhau trong cùng một giao diện chung. Trong OOP, đa hình cho phép các lớp con kế thừa từ một lớp cha thể hiện các hành vi riêng biệt của riêng mình.

Ví dụ:
```typescript
class Shape {
  public area(): number {
    return 0;
  }
}

class Circle extends Shape {
  private radius: number;

  constructor(radius: number) {
    super();
    this.radius = radius;
  }

  public area(): number {
    return Math.PI * this.radius ** 2;
  }
}

class Rectangle extends Shape {
  private width: number;
  private height: number;

  constructor(width: number, height: number) {
    super();
    this.width = width;
    this.height = height;
  }

  public area(): number {
    return this.width * this.height;
  }
}

// Sử dụng đa hình
const circle = new Circle(5);
const rectangle = new Rectangle(4, 6);

const shapes: Shape[] = [circle, rectangle];

shapes.forEach((shape) => {
  console.log(shape.area());
});
```

Trong ví dụ trên, chúng ta có lớp `Shape` là một lớp cha và lớp `Circle` và `Rectangle` là các lớp con kế thừa từ `Shape`. Mỗi lớp con triển khai phương thức `area` của riêng nó. Khi chúng ta tạo các đối tượng `Circle` và `Rectangle` và đặt chúng trong một mảng `Shape[]`, chúng ta có thể gọi phương thức `area` trên mỗi đối tượng theo cách đa hình. Điều này cho phép chúng ta tính diện tích của các hình học khác nhau mà không cần biết kiểu cụ thể của mỗi đối tượng.

## Kết luận
Trong hướng dẫn này, chúng ta đã tìm hiểu cách sử dụng OOP trong TypeScript bằng cách sử dụng lớp, kế thừa, phạm vi truy cập và đa hình. TypeScript cung cấp nhiều tính năng mạnh mẽ để xây dựng và quản lý mã OOP, cho phép chúng ta tổ chức và tái sử dụng mã một cách hiệu quả.