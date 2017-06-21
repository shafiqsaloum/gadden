var Observable = require("FuseJS/Observable");

  var images = [
    "9dD0gFvrFnY","5BCJwkGfIko","N2ZUsECT73U","g1tGjmH8rI4", "9dD0gFvrFnY","5BCJwkGfIko","N2ZUsECT73U","g1tGjmH8rI4",
  ];

  var list = Observable();
  var offset = Observable(0);
  var limit = 10;

  function increaseOffset() {
    changeOffset(5);
  }

  function decreaseOffset() {
    changeOffset(-5);
  }

  function changeOffset(diff) {
    var nextOffset = offset.value + diff;
    if (nextOffset >= 0) {
      offset.value = nextOffset;
      if ((list.length - nextOffset) <= limit) {
        loadItems().then(function() {
          atEnd.check();
        });
      }
    }
  }

  function loadItems() {
    var p = new Promise(function(resolve) {
      var items = images.map(function(i) {
        return {image: "https://source.unsplash.com/" + i + "/416x208"};
      });
      list.addAll(items);
      resolve();
    });
    return p;
  }

  loadItems();

  module.exports = {
    list: list,
    offset: offset,
    limit: limit,
    increaseOffset: increaseOffset,
    decreaseOffset: decreaseOffset
  }
