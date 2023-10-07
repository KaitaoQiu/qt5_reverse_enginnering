#include "tsignal.h"
#include <QMessageBox>
TsignalApp::TsignalApp()
{
    // connect mysignal with myslot
    connect(this,SIGNAL(mySignal()),SLOT(mySlot()));
    // connect mysignal(int) with myslot(int)
    connect(this,SIGNAL(mySignal(int)),SLOT(mySlot(int)));
    // connect mysignalParam(int,int) with myslotParam(int,int)
    connect(this,SIGNAL(mySignalParam(int,int)),SLOT(mySlotParam(int,int)));
}

void TsignalApp::mySlot()
{
    QMessageBox::about(this,"Tsignal", "This is a signal/slot sample without parameter.");
}

void TsignalApp::mySlot(int x)
{
    QMessageBox::about(this,"Tsignal", "This is a signal/slot sample with one parameter.");
}

void TsignalApp::mySlotParam(int x,int y)
{
    char s[256];
    sprintf(s,"x:%d y:%d",x,y);
    QMessageBox::about(this,"Tsignal", s);
}
void TsignalApp::slotFileNew()
{
    emit mySignal();
    emit mySignal(5);
    emit mySignalParam(5,100);
}

