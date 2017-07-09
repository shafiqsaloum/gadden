var Observable = require("FuseJS/Observable");
var data = Observable();
var contactData = Observable();

function AboutUs(item) {
    this.title = item.title;
    this.content = item.content;
};

function ContactInformation(item) {
  this.name = item.name;
}

fetch("https://dev.jexpo.se/dev/forms/aboutus?getAttributes=1")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new AboutUs(r));
    });
    data.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

fetch("https://dev.jexpo.se/dev/forms/contacts?getAttributes=1")
.then(function(response) { return response.json(); })
.then(function(responseObject) {
    var items = [];
    responseObject.results.forEach(function(r) {
        items.push(new ContactInformation(r));
    });
    contact.replaceAll(items);
    debug_log("data: " + JSON.stringify(data));
}).catch(function(e) {
    console.log("Error: " + e.message);
});

module.exports = {
    dataInfo: data,
    dataContact: contactData
};
