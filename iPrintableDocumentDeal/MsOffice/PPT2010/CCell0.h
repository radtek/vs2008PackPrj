// 从类型库向导中用“添加类”创建的计算机生成的 IDispatch 包装类

#import "C:\\Program Files (x86)\\Microsoft Office\\Office14\\MSPPT.OLB" no_namespace
// CCell0 包装类

class CCell0 : public COleDispatchDriver
{
public:
	CCell0(){} // 调用 COleDispatchDriver 默认构造函数
	CCell0(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCell0(const CCell0& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// 属性
public:

	// 操作
public:


	// Cell 方法
public:
	LPDISPATCH get_Application()
	{
		LPDISPATCH result;
		InvokeHelper(0x7d1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Parent()
	{
		LPDISPATCH result;
		InvokeHelper(0x7d2, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Shape()
	{
		LPDISPATCH result;
		InvokeHelper(0x7d3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	LPDISPATCH get_Borders()
	{
		LPDISPATCH result;
		InvokeHelper(0x7d4, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	void Merge(LPDISPATCH MergeTo)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x7d5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, MergeTo);
	}
	void Split(long NumRows, long NumColumns)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x7d6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, NumRows, NumColumns);
	}
	void Select()
	{
		InvokeHelper(0x7d7, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL get_Selected()
	{
		BOOL result;
		InvokeHelper(0x7d8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
		return result;
	}

	// Cell 属性
public:

};
