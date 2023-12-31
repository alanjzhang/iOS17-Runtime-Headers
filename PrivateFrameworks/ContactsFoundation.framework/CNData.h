/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNData : NSObject {
    CNFileManager * _fileManager;
    CNURLSessionFactory * _sessionFactory;
}

@property (nonatomic, readonly) CNFileManager *fileManager;
@property (nonatomic, readonly) CNURLSessionFactory *sessionFactory;

+ (unsigned long long)NSDataWritingOptionsFromCNDataWritingOptions:(unsigned long long)arg1;
+ (id)dataWithContentsOfFileURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2;
+ (id)observableWithContentsOfURL:(id)arg1;
+ (id)observableWithContentsOfURL:(id)arg1 sessionFactory:(id)arg2;
+ (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;
+ (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 fileManager:(id)arg4;

- (void).cxx_destruct;
- (id)dataWithContentsOfURL:(id)arg1;
- (id)fileManager;
- (id)init;
- (id)initWithFileManager:(id)arg1;
- (id)initWithFileManager:(id)arg1 urlSessionFactory:(id)arg2;
- (id)observableWithContentsOfURL:(id)arg1;
- (id)sessionFactory;
- (id)writeData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3;

@end
