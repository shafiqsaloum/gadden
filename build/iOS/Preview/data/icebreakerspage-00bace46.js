var Observable = require('FuseJS/Observable');
var data = Observable();

function IceBreaker(item) {
    this.text = item;
}

var selectedIceBreaker = Observable();
var items = [];

function restart() {
    data.value = randomData(items);
}

function selectedIceBreakers(args) {
    selectedIceBreakers.value = args.data;
}
function randomData(arr) {
    var a = arr[Math.floor(arr.length * Math.random())];
    return a;
}
fetch('http://p17.jexpo.se/gadden/forms/ws:icebreakers?getAttributes=1')
.then(function(response) {
    return response.json();
})
.then(function(responseObject) {
    var iterate = responseObject.results[0].text;
    iterate = iterate.split('\n');

    iterate.forEach(function(r){
        items.push(r);
    });
    data.replaceAll(items);
    data.value = randomData(items);
})
.catch(function(e) {
    console.log('Error: ' + e.message);
});

module.exports = {
    IceBreaker: data,
    restart: restart,
};
