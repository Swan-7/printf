int _printf(const char *format, ...);
int print_int(va_list l, flags_t *f);
int _putchar(char c);
int get_flag(char s, flags_t *f);

int print_address(va_list l, flags_t *f);

int print_bigS(va_list l, flags_t *f);

int _printf(const char *format, ...);

int (*pfunc)(va_list, flags_t *);

int print_bigS(va_list l, flags_t *f);

int print_hex(va_list l, flags_t *f);
