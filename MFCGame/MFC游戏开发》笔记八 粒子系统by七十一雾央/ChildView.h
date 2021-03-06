
// ChildView.h : CChildView 类的接口
//


#pragma once

#define SNOW_NUMBER 100  //雪花例子的数量
// CChildView 窗口

class CChildView : public CWnd
{
// 构造
public:
	CChildView();

// 特性
public:
	//粒子结构体
	struct snow
	{
		int x;     //粒子的x坐标
		int y;	   //粒子的y坐标
		int number;//粒子编号，共七种粒子
	}Snow[SNOW_NUMBER];    
	//雪花图像
	CImage m_snowMap[7];
	//英雄结构体
	struct shero
	{
		CImage hero;     //保存英雄的图像
		int x;             //保存英雄的位置
		int y;
		int direct;        //英雄的方向
		int frame;         //运动到第几张图片
	}MyHero;

	CRect m_client;    //保存客户区大小
	CImage m_bg;      //背景图片

	int m_xMapStart;     //x方向上地图的起始点
	int m_mapWidth;      //背景地图的宽度

	CDC m_cacheDC;   //缓冲DC
	CBitmap m_cacheCBitmap;//缓冲位图
// 操作
public:

// 重写
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 实现
public:
	virtual ~CChildView();

	// 生成的消息映射函数
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	void GetMapStartX();
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};

