/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLERequest : HMFObject {
    NSData * _body;
    HAPCharacteristic * _characteristic;
    HAPBTLEControlOutputStream * _controlOutputStream;
    bool  _encrypted;
    bool  _finished;
    HAPBTLETransactionIdentifier * _identifier;
    HMFBlockOperation * _operation;
    HMFTimer * _responseTimer;
    HAPService * _service;
    double  _timeoutInterval;
    unsigned char  _type;
}

@property (nonatomic, readonly, copy) NSData *body;
@property (nonatomic, readonly) HAPCharacteristic *characteristic;
@property (nonatomic, retain) HAPBTLEControlOutputStream *controlOutputStream;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly) HAPBTLETransactionIdentifier *identifier;
@property (nonatomic) HMFBlockOperation *operation;
@property (nonatomic, retain) HMFTimer *responseTimer;
@property (nonatomic, readonly) HAPService *service;
@property (nonatomic, readonly) double timeoutInterval;
@property (nonatomic, readonly) unsigned char type;

- (void).cxx_destruct;
- (id)_initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(bool)arg4 timeoutInterval:(double)arg5;
- (id)_serializeHeader;
- (id)body;
- (void)cancelWithError:(id)arg1;
- (id)characteristic;
- (id)controlOutputStream;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCharacteristic:(id)arg1 requestType:(unsigned char)arg2 bodyData:(id)arg3 shouldEncrypt:(bool)arg4 timeoutInterval:(double)arg5;
- (id)initWithRequestType:(unsigned char)arg1 bodyData:(id)arg2 shouldEncrypt:(bool)arg3 timeoutInterval:(double)arg4;
- (bool)isEncrypted;
- (bool)isFinished;
- (id)operation;
- (id)responseTimer;
- (id)serialize;
- (id)service;
- (void)setControlOutputStream:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setResponseTimer:(id)arg1;
- (id)shortDescription;
- (double)timeoutInterval;
- (unsigned char)type;

@end
