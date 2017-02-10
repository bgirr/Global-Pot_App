var Observable = require("FuseJS/Observable");
var storage = require("FuseJS/Storage");
var recipes = Observable();


function login_clicked()
{
    router.goto("OverviewPage");
}

module.exports = {
	login_clicked: login_clicked,
	recipes: recipes
};
