var Observable = require("FuseJS/Observable");
var storage = require("FuseJS/Storage");
var text = Observable("");
var image = Observable("113232");


function login_clicked()
{
    // TODO: validate login credentials

    router.goto("OverviewPage");
}

module.exports = {
	login_clicked: login_clicked
};
