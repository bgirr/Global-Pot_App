var Observable = require("FuseJS/Observable");
var storage = require("FuseJS/Storage");
var recipes = Observable();


function login_clicked()
{
    debug_log("Hier bist Du falsch!")
    router.goto("OverviewPage");

}

module.exports = {
	login_clicked: login_clicked,
	recipes: recipes
};
