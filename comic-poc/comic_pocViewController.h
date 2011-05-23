//
//  comic_pocViewController.h
//  comic-poc
//
//  Created by nimbus on 5/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface comic_pocViewController : UIViewController<UIScrollViewDelegate>

@property (nonatomic, retain) IBOutlet UIScrollView *scrollView;
@property (nonatomic, retain) UIImageView *imageViewA;
@property (nonatomic, retain) UIImageView *imageViewB;
@property (nonatomic, retain) UIImageView *imageViewC;

@end