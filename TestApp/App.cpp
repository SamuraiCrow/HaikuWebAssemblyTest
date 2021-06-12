#include "App.h"

#include <StringView.h>
#include <Window.h>

App::App(void)
	:	BApplication("application/x-vnd.dw-TestApp")
{
	BRect frame(100,100,500,400);
	BWindow *myWindow = new BWindow(frame, "My First App", B_TITLED_WINDOW,
		B_QUIT_ON_WINDOW_CLOSE);
	frame.Set(10,10,11,11);
	BStringView *label = new BStringView(frame, "myLabel", "Haiku Rocks!");
	label->ResizeToPreferred();
	myWindow->AddChild(label);
	myWindow->Show();
}


int
main(void)
{
	App *app = new App();
	app->Run();
	delete app;
	return 0;
}
