var Observable = require("FuseJS/Observable");

                    var data = Observable();

                    fetch('https://cookingtest-cookingtest.rhcloud.com/recipes/api/recipes/41')
                        .then(function(response) { return response.json(); })
                        .then(function(responseObject) { data.value = responseObject; });

                    module.exports = {
                        data: data
                    };
			function recipe_clicked()
				{
				    // TODO: validate login credentials

				    router.goto("LoginPage");
				}

module.exports = {
	data: data
		}