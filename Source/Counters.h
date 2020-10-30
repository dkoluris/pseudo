class CstrCounters {
    enum class ResetToZero: uh {
        whenFFFF = 0,
        whenTarget = 1
    };
    
public:
    struct {
        uh current;
        union {
            struct {
                uh : 1;
                uh : 2;
                ResetToZero resetToZero : 1;
                uh irqWhenTarget : 1;
                uh irqWhenFFFF : 1;
                uh : 1;
                uh : 1;
                uh clockSource : 2;
                uh : 1;
                uh : 1;
                uh : 1;
                uh : 3;
            };
            
            uh data;
        } mode;
        uh target;
        uw cnt;
    } timer[3];
    
    void reset();
    void step(ub, uw);
    uh read(uw);
    void write(uw, uh);
};

extern CstrCounters rootc;
