<<<<<<< HEAD
﻿#include "JsonService.h"

int main() {
	JsonService js;
	Weather w = js.getWeather("weather.json");


=======
﻿#include "XmlService.h"

int main() {
	XmlService xs;
	Weather w = xs.getWeather("weather.xml");

>>>>>>> feature-xml
	return 0;
}