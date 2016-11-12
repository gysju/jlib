//Using SDL and standard IO
#include <SDL.h>
#include <stdio.h>

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

SDL_Window* gWindow = NULL;
SDL_Surface* gScreenSurface = NULL;
SDL_Surface* gHelloWorld = NULL;

bool init()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return false;
	}
	else
	{
		//Create window
		gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
			return false;
		}
		else
		{
			//Get window surface
			gScreenSurface = SDL_GetWindowSurface(gWindow);

			//Fill the surface white
			SDL_FillRect(gScreenSurface, NULL, SDL_MapRGB(gScreenSurface->format, 0xFF, 0xFF, 0xFF));

			//Update the surface
			SDL_UpdateWindowSurface(gWindow);

			return true;
		}
	}
}

bool loadMedia()
{
	gHelloWorld = SDL_LoadBMP("math.bmp");
	if (gHelloWorld == NULL)
	{
		printf("Unable to load image  SDL Error: %s ", SDL_GetError());
		return false;
	}
	return true;
}

void close()
{
	//Deallocate surface

	SDL_FreeSurface( gHelloWorld );
	gHelloWorld = NULL;

	//Destroy window
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;

	//Quit SDL subsystem
	SDL_Quit();
}
int main(int argc, char* args[])
{
	//Initialize SDL
	if (!init())
	{
		printf("Ca a planté mec... dans l'init en plus -_- \n");
	}
	else
	{
		// load media
		if (!loadMedia())
		{
			printf("Failed to load media \n");
			SDL_Delay(2000);
		}
		else
		{
		   //Apply the image
			SDL_BlitSurface(gHelloWorld, NULL, gScreenSurface, NULL);

			//Update the surface
			SDL_UpdateWindowSurface( gWindow );

			// Wait two seconds
			SDL_Delay( 2000 );
		}
	}

	close();

	return 0;
}