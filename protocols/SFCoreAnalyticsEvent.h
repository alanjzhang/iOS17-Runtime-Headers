/* Generated by RuntimeBrowser.
 */

@protocol SFCoreAnalyticsEvent <NSObject>

@required

+ (NSString *)eventName;

- (NSDictionary *)eventPayload;
- (void)submitEvent;

@end
