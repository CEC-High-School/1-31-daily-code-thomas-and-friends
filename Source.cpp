#include<allegro5/allegro.h>
#include<allegro5\allegro_primitives.h>

int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = al_create_display(500, 500);

	al_clear_to_color(al_map_rgb( 0, 0, 0));

	al_draw_filled_rectangle(10, 10, 150, 80, al_map_rgb(20, 50, 50));
	al_draw_rectangle(10, 10, 150, 50, al_map_rgb(50, 80, 50), 5);

	al_draw_filled_circle(110, 80, 20, al_map_rgb(80, 200, 20));
	al_draw_filled_circle(40, 80, 20, al_map_rgb(80, 200, 20));

	al_draw_filled_circle(200, 80, 20, al_map_rgb(80, 200, 20));

	al_flip_display();
	al_rest(10);
	al_destroy_display(display);
}

