#include <vector>

using namespace std;

vector<int> merge_sort_by_Kotova(vector<int> data)
{
	int LBlockIt;
	int RBlockIt;
	int ReIt;
	int LBorder;
	int MBorder;
	int RBorder;
	vector<int> SortedBlock;
	for (int BlockSizeIterator = 1; BlockSizeIterator < data.size(); BlockSizeIterator *= 2)
	{
		for (int StartBlock = 0; StartBlock < data.size() - BlockSizeIterator; StartBlock += 2 * BlockSizeIterator)
		{
			SortedBlock.clear();
			LBlockIt = 0;
			RBlockIt = 0;
			LBorder = StartBlock;
			MBorder = StartBlock + BlockSizeIterator;
			RBorder = StartBlock + 2 * BlockSizeIterator;
			if (RBorder >= data.size())
			{
				RBorder = data.size();
			}
			SortedBlock.reserve(RBorder - LBorder);
			while (LBorder + LBlockIt < MBorder && MBorder + RBlockIt < RBorder)
			{
				if (data[LBorder + LBlockIt] < data[MBorder + RBlockIt])
				{
					SortedBlock.push_back(data[LBorder + LBlockIt++]);
				}
				else
				{
					SortedBlock.push_back(data[MBorder + RBlockIt++]);
				}
			}
			while (LBorder + LBlockIt < MBorder)
			{
				SortedBlock.push_back(data[LBorder + LBlockIt++]);
			}
			while (MBorder + RBlockIt < RBorder)
			{
				SortedBlock.push_back(data[MBorder + RBlockIt++]);
			}

			for (ReIt = 0; ReIt < LBlockIt + RBlockIt; ReIt++)
			{
				data[LBorder + ReIt] = SortedBlock[ReIt];
			}
		}
	}
	return data;
}

vector<double> merge_sort_by_Kotova(vector<double> data)
{
	int LBlockIt;
	int RBlockIt;
	int ReIt;
	int LBorder;
	int MBorder;
	int RBorder;
	vector<int> SortedBlock;
	for (int BlockSizeIterator = 1; BlockSizeIterator < data.size(); BlockSizeIterator *= 2)
	{
		for (int StartBlock = 0; StartBlock < data.size() - BlockSizeIterator; StartBlock += 2 * BlockSizeIterator)
		{
			SortedBlock.clear();
			LBlockIt = 0;
			RBlockIt = 0;
			LBorder = StartBlock;
			MBorder = StartBlock + BlockSizeIterator;
			RBorder = StartBlock + 2 * BlockSizeIterator;
			if (RBorder >= data.size())
			{
				RBorder = data.size();
			}
			SortedBlock.reserve(RBorder - LBorder);
			while (LBorder + LBlockIt < MBorder && MBorder + RBlockIt < RBorder)
			{
				if (data[LBorder + LBlockIt] < data[MBorder + RBlockIt])
				{
					SortedBlock.push_back(data[LBorder + LBlockIt++]);
				}
				else
				{
					SortedBlock.push_back(data[MBorder + RBlockIt++]);
				}
			}
			while (LBorder + LBlockIt < MBorder)
			{
				SortedBlock.push_back(data[LBorder + LBlockIt++]);
			}
			while (MBorder + RBlockIt < RBorder)
			{
				SortedBlock.push_back(data[MBorder + RBlockIt++]);
			}

			for (ReIt = 0; ReIt < LBlockIt + RBlockIt; ReIt++)
			{
				data[LBorder + ReIt] = SortedBlock[ReIt];
			}
		}
	}
	return data;
}
