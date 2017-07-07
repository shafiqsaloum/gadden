// var Observable = require("FuseJS/Observable");
//
// var data = Observable();
//
// fetch('https://dev.jexpo.se/dev/forms/news?getAttributes=1')
//     .then(function(response) { return response.json(); })
//     .then(function(responseObject) { data.replaceAll(responseObject); });
//
// module.exports = {
//     data: data
// };

// var Observable = require("FuseJS/Observable");
//
// var data = Observable();
//
// function Article(item) {
//   this.title = item.content.title;
//   // this.description = item.content.description;
//   // this.author = item.content.author;
//   // this.published = new Date(item.date_published * 1000).toDateString();
//   // this.image = "";
//   // if (item.content.media.images.length > 0) this.image = item.content.media.images[0].original_url;
// };
//
// fetch("https://dev.jexpo.se/dev/forms/news?getAttributes=1")
// .then(function(response) { return response.json(); })
// .then(function(responseObject) {
//   var items = [];
//   for (var i in responseObject.data.feed) {
//     items.push(new Article(responseObject.data.feed[i]));
//   }
//   data.replaceAll(items);
// });
//
// module.exports = {
//   dataSource: data
// };

// var images = [
//   "9dD0gFvrFnY","5BCJwkGfIko","N2ZUsECT73U","g1tGjmH8rI4","9dD0gFvrFnY","5BCJwkGfIko","N2ZUsECT73U","g1tGjmH8rI4","9dD0gFvrFnY","5BCJwkGfIko","N2ZUsECT73U","g1tGjmH8rI4",
// ];
//
// var list = Observable();
// var offset = Observable(0);
// var limit = 10;
//
// function increaseOffset() {
//   changeOffset(5);
// }
//
// function decreaseOffset() {
//   changeOffset(-5);
// }
//
// function changeOffset(diff) {
//   var nextOffset = offset.value + diff;
//   if (nextOffset >= 0) {
//     offset.value = nextOffset;
//     if ((list.length - nextOffset) <= limit) {
//       loadItems().then(function() {
//         atEnd.check();
//       });
//     }
//   }
// }
//
// function loadItems() {
//   var p = new Promise(function(resolve) {
//     var items = images.map(function(i) {
//       return {image: "https://source.unsplash.com/" + i + "/416x208"};
//     });
//     list.addAll(items);
//     resolve();
//   });
//   return p;
// }
//
// loadItems();
//
// module.exports = {
//   list: list,
//   offset: offset,
//   limit: limit,
//   increaseOffset: increaseOffset,
//   decreaseOffset: decreaseOffset
// }
