Action()
{

	web_add_cookie("_ga=GA1.2.206493945.1472112125; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("www.advantageonlineshopping.com", 
		"URL=http://www.advantageonlineshopping.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.eot?", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=http://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.eot?", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.eot?", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j46&a=836145837&t=pageview&_s=1&dl=http%3A%2F%2Fwww.advantageonlineshopping.com%2F&ul=ja-jp&de=utf-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1600x900&vp=1148x622&je=1&_u=AACAAMQAI~&jid=&cid=206493945.1472112125&tid=UA-81334227-1&z=1603344062", ENDITEM, 
		"Url=/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.eot?", ENDITEM, 
		"Url=/css/images/FacebookLogo.png", ENDITEM, 
		"Url=/catalog/api/v1/categories", ENDITEM, 
		"Url=/catalog/api/v1/deals/search?dealOfTheDay=true", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.eot?", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/arrow_right.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1237", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1236", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1235", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1238", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1234", ENDITEM, 
		"Url=/catalog/api/v1/categories/all_data", ENDITEM, 
		"Url=/catalog/api/v1/categories/attributes", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/catalog/api/v1/catalog/LastUpdate/timestamp", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4603", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4602", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://www.advantageonlineshopping.com/accountservice/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml; charset=utf-8", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("home-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/home-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20160824; DOMAIN=iecvlist.microsoft.com");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1434748155000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://www.advantageonlineshopping.com/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://www.advantageonlineshopping.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}