/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSComposeAttachmentAnalyticController : NSObject {
    MSDiagnosticManager * _diagnosticManager;
    long long  _totalDrawingsInsertedCount;
}

@property (nonatomic, retain) MSDiagnosticManager *diagnosticManager;

- (void).cxx_destruct;
- (void)_submitFinalDrawingInsertCount:(long long)arg1 sentMessage:(bool)arg2;
- (void)abandonMessageWithActualDrawingInsertCount:(long long)arg1;
- (id)diagnosticManager;
- (id)initWithDiagnosticManager:(id)arg1 totalDrawingsInsertedCount:(long long)arg2;
- (void)sendMessageWithActualDrawingInsertCount:(long long)arg1;
- (void)setDiagnosticManager:(id)arg1;

@end
