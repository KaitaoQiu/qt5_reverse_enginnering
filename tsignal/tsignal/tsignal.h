#include <QMainWindow>
#include <QObject>
// Must inherit QObject to use signals and slots
class TsignalApp:public QMainWindow
{
public:
    TsignalApp();
    void slotFileNew();
    Q_OBJECT
    // Signal declaration area
    signals:
    void mySignal();
    void mySignal(int x);
    void mySignalParam(int x,int y);
    // Slot declaration area
    public slots:
    void mySlot();
    void mySlot(int x);
    void mySlotParam(int x,int y);
    // TsignalApp* mySlot2();
};

