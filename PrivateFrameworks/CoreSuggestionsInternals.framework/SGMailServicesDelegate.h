/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMailServicesDelegate : NSObject <MSSearchDelegate> {
    id /* block */ _callback;
    NSObject<OS_dispatch_semaphore> *_done;
    NSError *_error;
    BOOL _ignoreEmpty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)error;
- (id)initWithCallback:(id /* block */)arg1 ignoreEmpty:(BOOL)arg2;
- (BOOL)search:(id)arg1 didFindResults:(id)arg2;
- (void)search:(id)arg1 didFinishWithError:(id)arg2;
- (void)wait;

@end
