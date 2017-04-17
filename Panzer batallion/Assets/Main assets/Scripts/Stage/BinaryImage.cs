using System.Collections;

public struct BinaryImage
{
	public int x;
	public int y;	
	private BitArray b;	
	public int Length;

	public BinaryImage(int x, int y)
	{
		this.x = x;
		this.y = y;

		b = new BitArray(x*y);
		Length = b.Length;
	}

	public BinaryImage(int x, int y, bool b)
	{
		this.x = x;
		this.y = y;

		this.b = new BitArray(x*y, b);
		Length = this.b.Length;
	}

	public void Set(int i, bool v)
	{
		b.Set(i, v);
	}

	public bool Get(int i)
	{
		return b.Get(i);
	}
}
