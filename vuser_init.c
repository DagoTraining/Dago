/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 1203
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("streaming-test", 
		"URL=http://kalimanjaro.hpeswlab.net/streaming-test/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(8);

	web_url("Index-DASH.html", 
		"URL=http://kalimanjaro.hpeswlab.net/streaming-test/Index-DASH.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://kalimanjaro.hpeswlab.net/streaming-test/", 
		"Snapshot=t31.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("bootstrap.min.css", 
		"URL=http://kalimanjaro.hpeswlab.net/streaming-test/css/bootstrap.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://kalimanjaro.hpeswlab.net/streaming-test/Index-DASH.html", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("jquery.min.js", 
		"URL=http://kalimanjaro.hpeswlab.net/streaming-test/js/jquery.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://kalimanjaro.hpeswlab.net/streaming-test/Index-DASH.html", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("bootstrap.min.js", 
		"URL=http://kalimanjaro.hpeswlab.net/streaming-test/js/bootstrap.min.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://kalimanjaro.hpeswlab.net/streaming-test/Index-DASH.html", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("dash.all.js", 
		"URL=http://kalimanjaro.hpeswlab.net/streaming-test/dash.all.js", 
		"Resource=1", 
		"RecContentType=application/x-javascript", 
		"Referer=http://kalimanjaro.hpeswlab.net/streaming-test/Index-DASH.html", 
		"Snapshot=t35.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_stream_open("ID=1", "URL=http://kalimanjaro.hpeswlab.net/streaming-test/elephants_dream_480p_heaac5_1.mpd", "Protocol=DASH", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)*/
	web_stream_play("ID=1", "PlayingDuration=10", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=5",LAST);
	//Stop the movie
	
	web_stream_play("ID=1", "PlayingDuration=15", LAST);
	
	web_stream_stop("ID=1",LAST);

	web_stream_close("ID=1", LAST);


	return 0;
}