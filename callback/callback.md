Trong JavaScript, callback là một hàm được truyền vào như một tham số cho một hàm khác và được gọi lại sau khi hàm gốc hoàn thành hoặc khi một sự kiện xảy ra. Callback thường được sử dụng để thực hiện các hành động bất đồng bộ hoặc xử lý dựa trên kết quả của một hành động khác.

Dưới đây là một ví dụ đơn giản để giúp bạn hiểu cách sử dụng callback trong JavaScript:

```js
function fetchData(callback) {
  // Giả lập việc lấy dữ liệu từ server sau 2 giây
  setTimeout(function() {
    var data = 'Dữ liệu từ server';
    callback(data); // Gọi lại hàm callback và truyền dữ liệu nhận được từ server
  }, 2000);
}

function processData(data) {
  console.log('Dữ liệu đã được xử lý: ' + data);
}

// Gọi hàm fetchData và truyền hàm processData làm callback
fetchData(processData);
```

Trong ví dụ trên, chúng ta có hai hàm `fetchData` và `processData`. Hàm `fetchData` là một hàm giả lập việc lấy dữ liệu từ server sau 2 giây bằng cách sử dụng hàm `setTimeout`. Sau khi lấy dữ liệu thành công, nó gọi lại hàm callback và truyền dữ liệu nhận được từ server.

Hàm `processData` được truyền vào `fetchData` như một callback. Khi dữ liệu đã được lấy từ server và được truyền vào hàm callback, hàm `processData` sẽ được gọi và dữ liệu được in ra màn hình.

Điều quan trọng cần nhớ khi sử dụng callback là hàm callback phải được truyền như một tham số và được gọi lại bên trong hàm gốc. Điều này cho phép xử lý bất đồng bộ và đảm bảo rằng các công việc tiếp theo chỉ được thực hiện sau khi hàm gốc hoàn thành công việc của nó.