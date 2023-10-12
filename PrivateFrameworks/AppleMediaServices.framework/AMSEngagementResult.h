/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementResult : NSObject <NSSecureCoding> {
    AMSCarrierLinkResult * _carrierLinkResult;
    NSData * _modelData;
    AMSPurchaseResult * _purchaseResult;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *ams_buyParams;
@property (nonatomic, retain) AMSCarrierLinkResult *carrierLinkResult;
@property (nonatomic, retain) NSData *modelData;
@property (nonatomic, retain) AMSPurchaseResult *purchaseResult;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)carrierLinkResult;
- (void)encodeWithCoder:(id)arg1;
- (id)expressCheckoutCardSelection;
- (long long)expressCheckoutPath;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (id)initWithPath:(long long)arg1;
- (id)initWithSelection:(id)arg1;
- (id)modelData;
- (id)modelForClass:(Class)arg1 error:(id*)arg2;
- (id)purchaseResult;
- (void)setCarrierLinkResult:(id)arg1;
- (void)setModelData:(id)arg1;
- (void)setPurchaseResult:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// AMSEngagementResult (FinanceAction)

+ (id)_updatedBodyFromValue:(id)arg1 request:(id)arg2;

- (id)ams_buyParams;
- (id)ams_requestActionFromRequest:(id)arg1;

@end
