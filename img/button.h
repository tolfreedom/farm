



// #ifdef button_SPRITE_H
// #error "button already exists"
// #else
#ifndef button_SPRITE_H
#define button_SPRITE_H

#include "ww.h"

// declare sprite
extern ww_sprite_t * button;
ww_sprite_t * button = NULL;


	
	// declare animation 
	extern ww_animation_t * button_button;
	ww_animation_t * button_button = NULL;
	
	
		
		//declare frame 
		extern ww_frame_t * button_button_Frame_0;
		ww_frame_t * button_button_Frame_0 = NULL;
		
		
		
		extern ww_polygon_t * button_button_Frame_0_Layer_0;
		ww_polygon_t * button_button_Frame_0_Layer_0 = NULL;
		
		extern ww_polygon_t * button_button_Frame_0_Layer_1;
		ww_polygon_t * button_button_Frame_0_Layer_1 = NULL;
		
		extern ww_polygon_t * button_button_Frame_0_Layer_2;
		ww_polygon_t * button_button_Frame_0_Layer_2 = NULL;
		
		extern ww_polygon_t * button_button_Frame_0_Layer_3;
		ww_polygon_t * button_button_Frame_0_Layer_3 = NULL;
		
		
		void init_button_button_Frame_0(){
		
		
			
			//declare layer
			ww_rgba_t button_button_Frame_0_Layer_0_color = { 240, 240, 240 };
			short button_button_Frame_0_Layer_0_x[4] = { 218, 390, 390, 218 };
			short button_button_Frame_0_Layer_0_y[4] = { 167, 168, 237, 237 };
			button_button_Frame_0_Layer_0 = ww_new_polygon(button_button_Frame_0_Layer_0_color, button_button_Frame_0_Layer_0_x, button_button_Frame_0_Layer_0_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t button_button_Frame_0_Layer_1_color = { 116, 113, 116 };
			short button_button_Frame_0_Layer_1_x[5] = { 387, 389, 390, 217, 388 };
			short button_button_Frame_0_Layer_1_y[5] = { 167, 167, 237, 236, 233 };
			button_button_Frame_0_Layer_1 = ww_new_polygon(button_button_Frame_0_Layer_1_color, button_button_Frame_0_Layer_1_x, button_button_Frame_0_Layer_1_y, 5);
			
			
		
		
			
			//declare layer
			ww_rgba_t button_button_Frame_0_Layer_2_color = { 233, 239, 239 };
			short button_button_Frame_0_Layer_2_x[5] = { 218, 218, 220, 222, 390 };
			short button_button_Frame_0_Layer_2_y[5] = { 167, 176, 169, 168, 167 };
			button_button_Frame_0_Layer_2 = ww_new_polygon(button_button_Frame_0_Layer_2_color, button_button_Frame_0_Layer_2_x, button_button_Frame_0_Layer_2_y, 5);
			
			
		
		
			
			//declare layer
			ww_rgba_t button_button_Frame_0_Layer_3_color = { 0, 0, 0 };
			short button_button_Frame_0_Layer_3_x[6] = { 390, 391, 391, 217, 217, 390 };
			short button_button_Frame_0_Layer_3_y[6] = { 168, 168, 238, 238, 237, 236 };
			button_button_Frame_0_Layer_3 = ww_new_polygon(button_button_Frame_0_Layer_3_color, button_button_Frame_0_Layer_3_x, button_button_Frame_0_Layer_3_y, 6);
			
			
		
		
			button_button_Frame_0 = ww_new_frame(
				button_button_Frame_0_Layer_0,
				button_button_Frame_0_Layer_1,
				button_button_Frame_0_Layer_2,
				button_button_Frame_0_Layer_3,
				NULL 
			);
		}
		
	
		
		//declare frame 
		extern ww_frame_t * button_button_Frame_1;
		ww_frame_t * button_button_Frame_1 = NULL;
		
		
		
		extern ww_polygon_t * button_button_Frame_1_Layer_0;
		ww_polygon_t * button_button_Frame_1_Layer_0 = NULL;
		
		extern ww_polygon_t * button_button_Frame_1_Layer_1;
		ww_polygon_t * button_button_Frame_1_Layer_1 = NULL;
		
		extern ww_polygon_t * button_button_Frame_1_Layer_2;
		ww_polygon_t * button_button_Frame_1_Layer_2 = NULL;
		
		extern ww_polygon_t * button_button_Frame_1_Layer_3;
		ww_polygon_t * button_button_Frame_1_Layer_3 = NULL;
		
		
		void init_button_button_Frame_1(){
		
		
			
			//declare layer
			ww_rgba_t button_button_Frame_1_Layer_0_color = { 193, 195, 199 };
			short button_button_Frame_1_Layer_0_x[4] = { 218, 390, 390, 218 };
			short button_button_Frame_1_Layer_0_y[4] = { 167, 168, 237, 237 };
			button_button_Frame_1_Layer_0 = ww_new_polygon(button_button_Frame_1_Layer_0_color, button_button_Frame_1_Layer_0_x, button_button_Frame_1_Layer_0_y, 4);
			
			
		
		
			
			//declare layer
			ww_rgba_t button_button_Frame_1_Layer_1_color = { 0, 0, 0 };
			short button_button_Frame_1_Layer_1_x[5] = { 387, 389, 390, 217, 388 };
			short button_button_Frame_1_Layer_1_y[5] = { 167, 167, 237, 236, 233 };
			button_button_Frame_1_Layer_1 = ww_new_polygon(button_button_Frame_1_Layer_1_color, button_button_Frame_1_Layer_1_x, button_button_Frame_1_Layer_1_y, 5);
			
			
		
		
			
			//declare layer
			ww_rgba_t button_button_Frame_1_Layer_2_color = { 0, 0, 0 };
			short button_button_Frame_1_Layer_2_x[5] = { 218, 218, 220, 222, 390 };
			short button_button_Frame_1_Layer_2_y[5] = { 167, 176, 169, 168, 167 };
			button_button_Frame_1_Layer_2 = ww_new_polygon(button_button_Frame_1_Layer_2_color, button_button_Frame_1_Layer_2_x, button_button_Frame_1_Layer_2_y, 5);
			
			
		
		
			
			//declare layer
			ww_rgba_t button_button_Frame_1_Layer_3_color = { 240, 240, 240 };
			short button_button_Frame_1_Layer_3_x[6] = { 390, 391, 391, 217, 217, 390 };
			short button_button_Frame_1_Layer_3_y[6] = { 168, 168, 238, 238, 237, 236 };
			button_button_Frame_1_Layer_3 = ww_new_polygon(button_button_Frame_1_Layer_3_color, button_button_Frame_1_Layer_3_x, button_button_Frame_1_Layer_3_y, 6);
			
			
		
		
			button_button_Frame_1 = ww_new_frame(
				button_button_Frame_1_Layer_0,
				button_button_Frame_1_Layer_1,
				button_button_Frame_1_Layer_2,
				button_button_Frame_1_Layer_3,
				NULL 
			);
		}
		
	
	
	void init_button_button(){
		init_button_button_Frame_0();
		init_button_button_Frame_1();
		
		
		int delay[] = { 2, 2 };
	
		button_button = ww_new_animation(
			delay,
			button_button_Frame_0,
			button_button_Frame_1,
			NULL 
		);
	}
  


void init_button(){
	
	init_button_button();
	

	button = ww_new_sprite( 0,
		button_button,
		NULL
	);
	
}

#endif
