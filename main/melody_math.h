void init_speaker(); 
void music_mode(void);
void button_task(void *pvParameter);
void check_music_answer(int button_index);
void music_mode_reset(void);
void print_single_note(int position);
void print_music_answer_choices(void);
void correct_note(void); 
void wrong_note(int wrong_choice);
void next_round(void);