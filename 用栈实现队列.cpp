#define _CRT_SECURE_NO_WARNINGS
class MyQueue {
public:
	/** Initialize your data structure here. */
	stack<int> _spush;
	stack<int> _spop;
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		_spush.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		if (_spop.empty())
		{
			while (!_spush.empty())
			{
				_spop.push(_spush.top());
				_spush.pop();
			}
		}
		int front = _spop.top();
		_spop.pop();
		return front;
	}

	/** Get the front element. */
	int peek() {
		if (_spop.empty())
		{
			while (!_spush.empty())
			{
				_spop.push(_spush.top());
				_spush.pop();
			}
		}
		return _spop.top();
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return _spop.empty() && _spush.empty();
	}
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue* obj = new MyQueue();
* obj->push(x);
* int param_2 = obj->pop();
* int param_3 = obj->peek();
* bool param_4 = obj->empty();
*/