/* Generated by Together */

#ifndef CAMULTIPAGEWINDOW_H
#define CAMULTIPAGEWINDOW_H
#include "CaGroup.h"
#include "CaWindow.h"
class CaMultiPageWindow : public CaWindow {
protected:
//	CaWindow *m_pHeadSubWin;
//	CaWindow *m_pEndSubWin;
//	CaWindow *m_pCurSubWin;

public:
	CaMultiPageWindow();
	virtual ~CaMultiPageWindow();
  //  virtual CaObject *ProcEvent(int iEvent,unsigned char *pEventData, int iDataLen);
	virtual CaWindow *CreateNewSubWin(int index);
	virtual CaWindow *CreateNewSubWin(int iX,int iY,int iW,int iH,int index);
	virtual void Add(CaObject *pObj);
	virtual CaWindow *FindSubWin(int index);
	virtual int ShowSubWin(int index);
    virtual int OnPgDnKey(void);
    virtual int OnPgUpKey(void);	
};
#endif //CAMULTIPAGEWINDOW_H


