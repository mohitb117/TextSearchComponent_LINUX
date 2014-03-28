# include <atomic>
# include <iostream>
# include <vector>

struct AtomicCounter 
{
    std::atomic<int> value;

    void increment()
    {
        ++value;
    }
    
    void decrement()
    {
        --value;
    }
    
    int get()
    {
        return value.load();
    }
};

template <class T>
class AbstractReferenceCount : public T
{
protected:
	bool _verbose = false;
private:
    AtomicCounter referenceCount;

public:
	AbstractReferenceCount()
	{
            referenceCount.increment();
        }

	~AbstractReferenceCount()
	{
		if (_verbose)
		{
			std::cout << "Destroying Reference of class obeyeing AbstractReferenceCount Interface"<<std::endl;
		}
	}


	T* AddRef()
	{
            referenceCount.increment();

		if (_verbose)
		{
			std::cout << "Incrementing Reference of class obeyeing AbstractReferenceCount Interface" << "\n Count is " << referenceCount.get() << std::endl;
		}

		return this;
	}

	void Release()
	{

            referenceCount.decrement();
            
                if (referenceCount.get()== 0)
		{
			delete this;
			return;
		}

		if (_verbose)
		{
			std::cout << "Decrementing Reference of class obeyeing AbstractReferenceCount Interface" << "\n Count is " << referenceCount.get() << std::endl;
		}

	}

};
