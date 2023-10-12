/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCCollectionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientID;
    NSString * _context;
    NSString * _id;
    NSString * _kind;
    long long  _limit;
}

@property (nonatomic, readonly, copy) NSString *clientID;
@property (nonatomic, readonly, copy) NSString *context;
@property (nonatomic, readonly, copy) NSString *id;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly) long long limit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_collectionRequestWithClientID:(id)arg1;
- (id)clientID;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (long long)limit;

// ASCCollectionRequest (MediaClientID)

+ (id)_requestWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4 clientID:(id)arg5;

- (id)_initWithID:(id)arg1 kind:(id)arg2 context:(id)arg3 limit:(long long)arg4 clientID:(id)arg5;
- (id)collectionRequestWithClientID:(id)arg1;

@end
