//standard library
#include <stdio.h>
#include <stdlib.h>

//engine
#include <ww.h>

//sprites
#include "button.h"


int main( int argc, char * arv[] ) {
	
	//initialization
	if(ww_window_create(argc, arv, "Pixarray", 1024, 576)){
		printf("Closing..\n");
		return 1;
	}
	
	init_button();
	
	//primary loop
	while(!ww_window_received_quit_event()){
				
		//update events
		ww_window_update_events();
		
		//quit
		if (istate.sel == 1){
			ww_window_send_quit_event();
		}
		

		//select button
		//~ if (istate.str == 1 && button->active_animation == 0){
			//~ button->active_animation = 1;
		//~ }
		//~ else if (istate.str == 1){
			//~ button->active_animation = 0;
		//~ }
		
		if (istate.str == 1 && button->active_animation == 0){
			button->active_animation = 1;
		}
		
		ww_draw_sprite(button);
		
		//draw screen
		ww_window_update_buffer();
	}
	
	ww_free_sprite(button);
	
	//clean up and exit
	ww_window_destroy();
	return 0;
}
