#define printx(text, ...)\
    printf(text, __VA_ARGS__);\
    putchar('\n');\
    exit(0)

class CstrPSeudo {
    void reset();
    
public:
    void init(const char *);
    
#ifdef TARGET_OS_MAC
    NSTextView *output;
    void setConsoleView(NSTextView *textView) {
        output = textView;
    }
#endif
};

extern CstrPSeudo psx;
