#pragma once

class _AA_DLL_EXPORT_ CPrintableDocumentDeal
{
public:
	CPrintableDocumentDeal(void);
	~CPrintableDocumentDeal(void);

	//��ȡPDF�ĵ�ҳ��,�ɹ�����TRUE,���򷵻�FALSE
	static BOOL GetPdfPageCount(CString szPdfFilePath, DWORD &dwPageCount);
	//��pdf�ļ�ת����tif�ļ�,ת���ɹ�����TRUE,���򷵻�FALSE
	static BOOL PdfToTiff(CString szPdfFilePath, CString szTiffFilePath, BOOL bColor = FALSE, int nDpi = Image_Deal_Max_Dpi, BOOL bDelPdf = FALSE);
	//��Word�ļ�ת����PDF�ļ�,ת���ɹ�����TRUE,���򷵻�FALSE
	static BOOL WordToPdf(CString szWordFilePath, CString szPdfFilePath, BOOL bDelWord = FALSE);
	//��Word�ļ�ת����tif�ļ�,ת���ɹ�����TRUE,���򷵻�FALSE
	static BOOL WordToTiff(CString szWordFilePath, CString szTiffFilePath, BOOL bColor = FALSE, int nDpi = Image_Deal_Max_Dpi, BOOL bDelWord = FALSE);
	//��ȡWord�ĵ�ҳ��,�ɹ�����TRUE,���򷵻�FALSE
	static BOOL GetWordPageCount(CString szWordFilePath, DWORD &dwPageCount);
	//��Excel�ļ�ת����PDF�ļ�,ת���ɹ�����TRUE,���򷵻�FALSE
	static BOOL ExcelToPdf(CString szExcelFilePath, CString szPdfFilePath, BOOL bDelExcel = FALSE, WORD dwPaperSize = DMPAPER_A4, WORD dwPageOrientation = DMORIENT_PORTRAIT);
	//��Excel�ļ�ת����tif�ļ�,ת���ɹ�����TRUE,���򷵻�FALSE
	static BOOL ExcelToTiff(CString szExcelFilePath, CString szTiffFilePath, BOOL bColor = FALSE, int nDpi = Image_Deal_Max_Dpi, BOOL bDelExcel = FALSE, WORD dwPaperSize = DMPAPER_A4, WORD dwPageOrientation = DMORIENT_PORTRAIT);
	//��ȡExcel�ĵ�ҳ��,�ɹ�����TRUE,���򷵻�FALSE
	static BOOL GetExcelPageCount(CString szExcelFilePath, DWORD &dwPageCount);
	//��PPT�ļ�ת����PDF�ļ�,ת���ɹ�����TRUE,���򷵻�FALSE
	static BOOL PPTToPdf(CString szPPTFilePath, CString szPdfFilePath, BOOL bDelPpt = FALSE);
	//��PPT�ļ�ת����tif�ļ�,ת���ɹ�����TRUE,���򷵻�FALSE
	static BOOL PPTToTiff(CString szPPTFilePath, CString szTiffFilePath, BOOL bColor = FALSE, int nDpi = Image_Deal_Max_Dpi, BOOL bDelPpt = FALSE);
	//��ȡPPT�ĵ�ҳ��,�ɹ�����TRUE,���򷵻�FALSE
	static BOOL GetPPTPageCount(CString szPPTFilePath, DWORD &dwPageCount);
	//��ȡTif�ĵ�ҳ��
	static BOOL GetTiffPageCount(CString szTifFilePath, DWORD &dwPageCount);
	//Ԥ������ͨ��ͼƬ�ļ�,ʹ��ת����������ӡ��tif�ļ�
	static BOOL PictureToPrintTifFile(CString szPicFilePath, CString szTifFilePath, int nPapeType, int nPapeOrientation
		, BOOL bColor = FALSE, int nMaxDpi = Image_Deal_Max_Dpi, BOOL bDelPic = FALSE
		, PicturePostion pp = PicturePostion_Cetter, PictureSize ps = PictureSize_Full);
	//����ͼƬ�Ĵ�ӡλ��
	static void AdjustPicturePostion(Size PrintSize, Size ImageSize, Rect& ImageDestRect
		, PicturePostion pp = PicturePostion_Cetter, PictureSize ps = PictureSize_Full);
	//���ݴ�ӡֽ�ͺʹ�ӡdpi����ȡ���������С�ʹ�ӡ����ͼƬ��С
	static void GetPageSize(int nPapeType, float fXDpi, float fYDpi, Size& PhysicalSize, Size& PrintSize);
	//����ͼƬ�����ɴ�ӡ���򣬻�ȡ��ѵĴ�ӡdpi
	static void GetImagePrintDpi(Image& image, Size& MaxPrintSize, float& fXMaxDpi, float& fYMaxDpi);
	//����ͼƬ�ʹ�ӡ��������ȡͼƬ����Ѵ�ӡ����
	static void GetImagePrintParam(Image& image, int nPapeType, float& fXMaxDpi, float& fYMaxDpi
		, Size& PhysicalSize, Size& PrintSize, Size& ImageSize, Rect& ImageDestRect
		, PicturePostion pp = PicturePostion_Cetter, PictureSize ps = PictureSize_Full);
	static Image* ConvertCmykToRgb(Image* cmykImage);

};