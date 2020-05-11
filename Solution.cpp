class Message {
public: 
    Message() {}
    explicit Message(const string& str, int id) : m_text(str), m_id(id){}
    const string& get_text() {
        return m_text;
    }
    bool operator<(const Message& msg)
    {
        return m_id < msg.m_id;
    }
private:
    string m_text;
    int m_id;
};

class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        return Message(text, m_id++); 
    }
private:
    int m_id{0};
};
