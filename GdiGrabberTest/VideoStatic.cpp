// PenViewStatic.cpp : 实现文件
//

#include "stdafx.h"
#include "VideoStatic.h"


// CPenViewStatic

IMPLEMENT_DYNAMIC(CVideoStatic, CStatic)

CVideoStatic::CVideoStatic()
:width_(0),
 height_(0)
{
	
}

CVideoStatic::~CVideoStatic()
{
}


BEGIN_MESSAGE_MAP(CVideoStatic, CStatic)
	ON_WM_PAINT()
END_MESSAGE_MAP()


void CVideoStatic::OnPaint()
{
	/*if (mem_dc_ == NULL)
	{
	GetWindowRect(rect_);

	HDC dc = ::GetWindowDC(this->GetSafeHwnd());
	mem_dc_ = CreateCompatibleDC(dc);
	HBITMAP bitmap = CreateCompatibleBitmap(dc, rect_.Width(), rect_.Height());
	SelectObject(mem_dc_, bitmap);
	DeleteObject(bitmap);
	}*/

	
	/*if (mem_dc_)
	{
	BitBlt(dc.GetSafeHdc(), 0, 0, rect_.Width(), rect_.Height(), mem_dc_, 0, 0, SRCCOPY);
	}*/

	CPaintDC dc(this);
	CRect rect;
	GetWindowRect(rect);
	dib_.stretch_blt(dc.GetSafeHdc(), 0, 0, rect.Width(), rect.Height(),
		0, 0, dib_.get_width(), dib_.get_height());
}








// CPenViewStatic 消息处理程序