#include <stdio.h>
#include <allegro5/allegro.h>
#include <cmath>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

const float FPS = 600;
const int SCREEN_W = 700;
const int SCREEN_H = 700;

//change this number to change the size of the "marker tip" that draws the shape!
const int BOUNCER_SIZE = 7;

int main(int argc, char **argv) {
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	ALLEGRO_BITMAP *bouncer = NULL;
	float bouncer_x = SCREEN_W / 1.0 - BOUNCER_SIZE / 1.0;
	float bouncer_y = SCREEN_H / 1.0 - BOUNCER_SIZE / 1.0;
	float bouncer_dx = -4.0, bouncer_dy = 4.0;
/////
	ALLEGRO_BITMAP *bouncer2 = NULL;
	float bouncer2_x = SCREEN_W / 1.0 - BOUNCER_SIZE / 1.0;
	float bouncer2_y = SCREEN_H / 1.0 - BOUNCER_SIZE / 1.0;
	float bouncer2_dx = -4.0, bouncer2_dy = 4.0;
	bool redraw = true;
	double t = 1;
	
	al_init();
	al_init_font_addon(); 
	al_init_ttf_addon();
	ALLEGRO_FONT* font = al_load_ttf_font("rawrXD.ttf", 30, 0);
	timer = al_create_timer(4.0 / FPS);

	display = al_create_display(SCREEN_W, SCREEN_H);


	bouncer = al_create_bitmap(BOUNCER_SIZE, BOUNCER_SIZE);

	al_set_target_bitmap(bouncer);

	al_clear_to_color(al_map_rgb(256, 256, 256));
	////
	bouncer2 = al_create_bitmap(BOUNCER_SIZE, BOUNCER_SIZE);

	al_set_target_bitmap(bouncer2);

	al_clear_to_color(al_map_rgb(255, 255, 255));

	////
	al_set_target_bitmap(al_get_backbuffer(display));

	event_queue = al_create_event_queue();

	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_register_event_source(event_queue, al_get_timer_event_source(timer));

	//change the numbers to change the background color, 000 is black
	al_clear_to_color(al_map_rgb(400, 10, 10));

	al_flip_display();

	al_start_timer(timer);

	while (1)
	{

		t++;
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_TIMER) {
			if (bouncer_x < 0 || bouncer_x > SCREEN_W - BOUNCER_SIZE) {
				bouncer_dx = -bouncer_dx;
			}

			if (bouncer_y < 0 || bouncer_y > SCREEN_H - BOUNCER_SIZE) {
				bouncer_dy = -bouncer_dy;

			}
			bouncer2_dx = -bouncer2_dx;
			bouncer2_dy = -bouncer2_dy;
			//////////////////////////////////////////////////////////////////////////////////////////////
			//here's the parametric equations that determine the shape!!
			bouncer_x = 400 + 50 * (5 * cos(t) - cos(2 * t));
			bouncer_y = 300 + 50 * (2 * sin(t) - sin(5 * t));

			bouncer2_x = 10 + 1 * (16 * (sin(t)*(sin(t))*(sin(t))));
			bouncer2_y = 10 + (1 * (13 * cos(t) - 5 * cos(2 * t) - 2 * cos(3 * t) - cos(4 * t)))*-1;
			/////////////////////////////////////////////////////////////////////////////////////////////////////
			redraw = true;
		}
		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			break;
		}

		if (redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false;

			//a well-placed if statement here might make it blink

			//uncommenting this line makes it moving dots instead of picture
			//also, change the number values to change the background color 
			// al_clear_to_color(al_map_rgb(0,0,0)); 	

			al_set_target_bitmap(bouncer);

			//mess with this last line here to change colors
			
			al_clear_to_color(al_map_rgb(200, t, 100));
			al_set_target_bitmap(al_get_backbuffer(display));
			al_draw_bitmap(bouncer, bouncer_x, bouncer_y, 0);
			///
			al_draw_bitmap(bouncer2, bouncer2_x+250, bouncer2_y+230, 0);
			al_draw_text(font, al_map_rgb(0, 0, 0), 640 / 2, (480 / 4), ALLEGRO_ALIGN_CENTER, "The back round is red, the ocean is blue.");
			al_draw_text(font, al_map_rgb(0, 0, 0), 740 / 2, (580 / 4), ALLEGRO_ALIGN_CENTER, "Be my valintine cuz this fish loves you.");

			al_flip_display();
		}
	}

	al_destroy_bitmap(bouncer);
	al_destroy_bitmap(bouncer2);
	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);

	return 0;
}
