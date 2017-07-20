var Observable = require("FuseJS/Observable");
var data = Observable();

function Exhibitor(item) {
    this.name = item.name;
    this.logo = item.profile.logotype.thumbs.large;
    this.about = item.profile.aboutUs;
};

var selectedExhibitor = Observable();

function exhibitorClicked(args) {
	console.log(JSON.stringify(args.data));
	selectedExhibitor.value = args.data;
};

fetch("http://dev.jexpo.se/dev/exhibitors/ws:2017?getAttributes=true")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new Exhibitor(r));
    });
    data.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    exhibitor: data,
    exhibitorClicked: exhibitorClicked,
    selectedExhibitor: selectedExhibitor
};
