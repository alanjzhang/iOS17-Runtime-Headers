/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVXPCTransaction : NSObject {
    NSUUID * _identifier;
    NSString * _name;
    NSObject<OS_os_transaction> * _transaction;
    long long  _transactionCount;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) NSString *name;

+ (id)activeTransactions;

- (void).cxx_destruct;
- (void)beginTransaction;
- (id)description;
- (void)endTransaction;
- (void)endTransactionOnDate:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isActive;
- (id)name;

@end
