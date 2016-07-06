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
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=1", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=1","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=1",LAST);*/

	web_stream_close("ID=1", LAST);

	lr_think_time(14);

	web_url("time.akamai.com", 
		"URL=http://time.akamai.com/?iso", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=http://kalimanjaro.hpeswlab.net/streaming-test/Index-DASH.html", 
		"Snapshot=t36.inf", 
		"Mode=HTTP", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_stream_open("ID=2", "URL=http://kalimanjaro.hpeswlab.net/streaming-test/Video/ED_SD_480p_reenc-avc1.42c01e-0s-848x480-h264-1500000bps_seg.mp4", "Protocol=HTTP", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=2", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=2","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=2",LAST);*/

	web_stream_close("ID=2", LAST);

	web_stream_open("ID=3", "URL=http://kalimanjaro.hpeswlab.net/streaming-test/Video/ED-CM-5.1-DVD_length_fixed-653s-6-heaac-64000bps_seg.mp4", "Protocol=HTTP", LAST);

	/*Basic streaming flow skeleton:
	//Play the movie from the beginning(the entire movie duration is XXX)
	web_stream_play("ID=3", "PlayingDuration=XXX", LAST);
	//Pause the movie
	web_stream_pause("ID=3","PausingDuration=XXX",LAST);
	//Stop the movie
	web_stream_stop("ID=3",LAST);*/

	web_stream_close("ID=3", LAST);

	web_add_cookie("MUID=3AA790D29C556CEB31E799EF9DD26D4E; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=f176c90f25c04553864b41f8ab878a23&HASH=f176&LV=201606&V=4&LU=1466700924999; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MSFPC=ID=f176c90f25c04553864b41f8ab878a23&CS=3&LV=201606&V=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAB+BwAAnQK74AFNxs1CzFaYfqXk1g!!&V=4; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20160624; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("RTO0=A=ODCnXYtcJU6uIcvXAijngg&B=&C=1783; DOMAIN=iecvlist.microsoft.com");

	lr_think_time(19);

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1434748155000/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	return 0;
}