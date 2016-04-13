#include<allegro5\allegro.h>
#include<allegro5\allegro_native_dialog.h>
#include<allegro5\allegro_font.h>
#include<allegro5\allegro_ttf.h>
int main(void)
{
	ALLEGRO_DISPLAY *display = NULL;
	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "failed to initialise allegro!", NULL, NULL);
		return -1;
	}
	if (!display)
	{
		{
			al_show_native_message_box(NULL, NULL, NULL, "failed to initialise display!", NULL, NULL);
			return -1;
		}
	}
}
