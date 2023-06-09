//
// Generated file, do not edit! Created by opp_msgtool 6.0 from QueryMsg.msg.
//

#ifndef __QUERYMSG_M_H
#define __QUERYMSG_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class QueryMsg;
class QueryResp;
/**
 * Class generated from <tt>QueryMsg.msg:20</tt> by opp_msgtool.
 * <pre>
 * message QueryMsg
 * {
 *     int gate_paths[10];
 *     int from_gates[10];
 *     int index;
 *     int length;
 *     string MESSAGE;
 * }
 * </pre>
 */
class QueryMsg : public ::omnetpp::cMessage
{
  protected:
    int gate_paths[10] = {0};
    int from_gates[10] = {0};
    int index = 0;
    int length = 0;
    omnetpp::opp_string MESSAGE;

  private:
    void copy(const QueryMsg& other);

  protected:
    bool operator==(const QueryMsg&) = delete;

  public:
    QueryMsg(const char *name=nullptr, short kind=0);
    QueryMsg(const QueryMsg& other);
    virtual ~QueryMsg();
    QueryMsg& operator=(const QueryMsg& other);
    virtual QueryMsg *dup() const override {return new QueryMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual size_t getGate_pathsArraySize() const;
    virtual int getGate_paths(size_t k) const;
    virtual void setGate_paths(size_t k, int gate_paths);

    virtual size_t getFrom_gatesArraySize() const;
    virtual int getFrom_gates(size_t k) const;
    virtual void setFrom_gates(size_t k, int from_gates);

    virtual int getIndex() const;
    virtual void setIndex(int index);

    virtual int getLength() const;
    virtual void setLength(int length);

    virtual const char * getMESSAGE() const;
    virtual void setMESSAGE(const char * MESSAGE);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const QueryMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, QueryMsg& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>QueryMsg.msg:28</tt> by opp_msgtool.
 * <pre>
 * message QueryResp
 * {
 *     int gate_paths[10];
 *     int index;
 *     int length;
 *     string MESSAGE;
 *     int server_id;
 * }
 * </pre>
 */
class QueryResp : public ::omnetpp::cMessage
{
  protected:
    int gate_paths[10] = {0};
    int index = 0;
    int length = 0;
    omnetpp::opp_string MESSAGE;
    int server_id = 0;

  private:
    void copy(const QueryResp& other);

  protected:
    bool operator==(const QueryResp&) = delete;

  public:
    QueryResp(const char *name=nullptr, short kind=0);
    QueryResp(const QueryResp& other);
    virtual ~QueryResp();
    QueryResp& operator=(const QueryResp& other);
    virtual QueryResp *dup() const override {return new QueryResp(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual size_t getGate_pathsArraySize() const;
    virtual int getGate_paths(size_t k) const;
    virtual void setGate_paths(size_t k, int gate_paths);

    virtual int getIndex() const;
    virtual void setIndex(int index);

    virtual int getLength() const;
    virtual void setLength(int length);

    virtual const char * getMESSAGE() const;
    virtual void setMESSAGE(const char * MESSAGE);

    virtual int getServer_id() const;
    virtual void setServer_id(int server_id);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const QueryResp& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, QueryResp& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline QueryMsg *fromAnyPtr(any_ptr ptr) { return check_and_cast<QueryMsg*>(ptr.get<cObject>()); }
template<> inline QueryResp *fromAnyPtr(any_ptr ptr) { return check_and_cast<QueryResp*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __QUERYMSG_M_H

