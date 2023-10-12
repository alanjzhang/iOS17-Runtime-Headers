/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
 */

@interface ATXProactiveSuggestionFeedbackResult : NSObject <NSSecureCoding> {
    ATXClientModelCacheUpdate * _clientCacheUpdate;
    unsigned char  _consumerSubType;
    <ATXProactiveSuggestionFeedbackContextProtocol> * _context;
    long long  _sessionType;
    ATXBlendingModelUICacheUpdate * _uiCacheUpdate;
}

@property (nonatomic, readonly) ATXClientModelCacheUpdate *clientCacheUpdate;
@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) <ATXProactiveSuggestionFeedbackContextProtocol> *context;
@property (nonatomic, readonly) long long sessionType;
@property (nonatomic, readonly) ATXBlendingModelUICacheUpdate *uiCacheUpdate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientCacheUpdate;
- (unsigned char)consumerSubType;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConsumerSubType:(unsigned char)arg1 sessionType:(long long)arg2 clientCacheUpdate:(id)arg3 uiCacheUpdate:(id)arg4 context:(id)arg5;
- (long long)sessionType;
- (id)uiCacheUpdate;
- (id)validContextClassNames;

@end
