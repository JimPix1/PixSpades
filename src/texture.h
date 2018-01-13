struct texture {
    int width,height;
    int texture_id;
    unsigned char* pixels;
};

extern struct texture texture_splash;
extern struct texture texture_minimap;
extern struct texture texture_gradient;

extern struct texture texture_health;
extern struct texture texture_block;
extern struct texture texture_grenade;
extern struct texture texture_ammo_semi;
extern struct texture texture_ammo_smg;
extern struct texture texture_ammo_shotgun;

extern struct texture texture_color_selection;

extern struct texture texture_zoom_semi;
extern struct texture texture_zoom_smg;
extern struct texture texture_zoom_shotgun;

extern struct texture texture_white;
extern struct texture texture_target;
extern struct texture texture_indicator;

extern struct texture texture_player;
extern struct texture texture_medical;
extern struct texture texture_intel;
extern struct texture texture_command;
extern struct texture texture_tracer;

extern struct texture texture_ui_wait;
extern struct texture texture_ui_join;
extern struct texture texture_ui_reload;
extern struct texture texture_ui_bg;
extern struct texture texture_ui_input;

#define TEXTURE_FILTER_NEAREST  0
#define TEXTURE_FILTER_LINEAR   1

void texture_filter(struct texture* t, int filter);
void texture_init(void);
int texture_create(struct texture* t, char* filename);
int texture_create_buffer(struct texture* t, int width, int height, unsigned char* buff);
void texture_draw(struct texture* t, float x, float y, float w, float h);
void texture_draw_sector(struct texture* t, float x, float y, float w, float h, float u, float v, float us, float vs);
void texture_draw_empty(float x, float y, float w, float h);
void texture_draw_empty_rotated(float x, float y, float w, float h, float angle);
void texture_draw_rotated(struct texture* t, float x, float y, float w, float h, float angle);
void texture_resize_pow2(struct texture* t);
unsigned int texture_block_color(int x, int y);
void texture_gradient_fog(unsigned int* gradient);
